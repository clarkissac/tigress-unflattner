import idaapi
import idautils
import idc
import ida_nalt
import ida_bytes
import ida_auto
import ida_gdl
import ida_pro
import ida_hexrays
import ida_lines
def get_pseudocode(func) -> str:

    cfunc = ida_hexrays.decompile(func)
    if cfunc is None:
        print("Failed to decompile!") # add to log
        return False

    sv = cfunc.get_pseudocode()

    decompiled_func_string = ""
    for sline in sv:
        decompiled_func_string += f"{ida_lines.tag_remove(sline.line)}\n"

    return decompiled_func_string

def find_function_address_by_name(func_name):
    for func in idautils.Functions():
        print(func)
        if idc.get_func_name(func) == func_name:
            return func

def main():
    ida_auto.auto_wait()
    # Init Variables
    file = idc.ARGV[2]
    for func_name in str(idc.ARGV[1]).split(","):
        ea = find_function_address_by_name(func_name)  # function address
        func = idaapi.get_func(ea)
        filename = f"{file}_{func_name}"
        
        ida_gdl.gen_flow_graph(filename,func_name,func,func.start_ea,func.end_ea,ida_gdl.CHART_GEN_DOT)

        # generate pseudocode
        pseudocode = get_pseudocode(func)
        with open(f"{filename}.c","w", encoding = 'utf-8') as f:
            f.write(pseudocode)

    #exit
    ida_pro.qexit(1)
if __name__ == "__main__":
    main()