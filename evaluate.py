#"C:\Program Files\IDA Pro 7.5 SP3\ida64.exe" -A -S"F:\FH\BAKK2\Samples\Evaluate\unflatten_evaluate.py str_flip str_flip_flatten" "F:\FH\BAKK2\Samples\Evaluate\Samples_obf\str_flip_flatten" -c

import os
import shutil


def get_functions(log_file):
    splited_log_file = [ t for t in log_file.split() if t.startswith('--Functions')][0]
    functions = splited_log_file[splited_log_file.find("=")+1:].split()

    return functions



def main():
    dir = "F:\BAKK2\Evaluate\Samples_obf_recoverd"
    ida_dir = r"C:\Program Files\IDA Pro 7.5 SP3"
    logs_dir = "F:\BAKK2\Evaluate\logs"
    functions = []

    for root, dirs, files in os.walk(dir):
        for filename in files:
            print(f"opening file: {filename}")

            with open(os.path.join(logs_dir,f"{filename}.log"),"r") as f:
                log_file = f.read()
                functions = get_functions(log_file)
            print(f"parsing fuction: {functions}")

            #cmd = ['"C:\\Program Files\\IDA Pro 7.5 SP3\\ida64.exe"', '-A', f'-S"F:\\FH\\BAKK2\\Samples\\Evaluate\\unflatten_evaluate.py "{func_name}" "{filename}""',os.path.join(root, filename),'-c']
            #subprocess.Popen(cmd,shell=True)
            os.popen(f'"{ida_dir}\\ida64.exe" -A -S"F:\\FH\\BAKK2\\Samples\\Evaluate\\unflatten_evaluate.py {",".join(functions)} {filename}" "{os.path.join(root, filename)}"').read()

            os.remove(os.path.join(root,f"{filename}.i64"))
            for file in os.listdir(dir):
                if file.endswith(".dot"):
                    shutil.move(os.path.join(root,file),os.path.join(root,"dot_files",file))
                elif file.endswith(".c"):
                    shutil.move(os.path.join(root,file),os.path.join(root,"pseudocode",file))
        break
if __name__ == "__main__":
    main()