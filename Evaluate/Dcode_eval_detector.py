import csv
import os

from copydetect import CopyDetector


def main():
    obf_dir = "F:\BAKK2\Evaluate\Samples_obf"
    clean_dir = "F:\BAKK2\Evaluate\Samples_clean"
    recoverd_dir = "F:\BAKK2\Evaluate\Samples_obf_recoverd"
    match_rate_dict = {}


    for file in os.listdir(os.path.join(recoverd_dir,"pseudocode")):
        detector = CopyDetector(extensions=["c"],display_t=0.5,out_file=os.path.join(obf_dir,"reports",f"{file}.html"),autoopen=False)
        detector.add_file(os.path.join(clean_dir,"pseudocode",file))
        detector.add_file(os.path.join(obf_dir,"pseudocode",file))
        detector.run()
        temp_list = detector.get_copied_code_list()
        detector.generate_html_report()


        if temp_list:
            match_rate_dict[file] = temp_list[0][1]
        else:
            match_rate_dict[file] = 0


        


    with open("output.csv", "w") as csv_file:
        w = csv.writer(csv_file)
        # loop over dictionary keys and values
        for key, val in match_rate_dict.items():
            # write every key and value to file
            w.writerow([key, val])
if __name__ == "__main__":
    main()
