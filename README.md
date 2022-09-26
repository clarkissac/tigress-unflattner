# tigress-Unflattner
Tigress Switch-Dispatcher Control flow Flattening obfuscation Unflattner
---
This project was created as my final year project. This Script unfalltens the switch based Control-flow obfuscation from the Tigress obfuscator. The core of this project is based on assembly pattern matching.
## Contents
- unflatten.py | main script the obfuscated function name has to be replaced in the main function.
- Evaluate | Scripts used for evaluation of the project.
	- unflatten_evaluate.py | functions name and file name will be extracted from ARGV variable. Outputs a dot graph and decompiled code.
	- notflatten_evalute.py | same as unflatten_evaluate, but does not unflatten.
	- clean_evaluate.py | executes notflatten_evaluate.py in Ida and saves the files in Samples_clean.
	- evaluate.py | executes unflatten_evaluate.py in Ida and saves the files in Samples_obf.
	- Dcode_evaluate.py | compares Dcode of two directories and saves similarity score in csv.
## Usage

### As script
 Load script in IDA  → File → Script and use as described in contents.
### Evaluation
run in the order listed in Contents / Evaluate.
### Optional
- change the not_flatten and clean_evaluate dir to Samples_obf to receive the obfuscated evaluation files
- change the Dcode_eval dir to Samples_obf to compare with other dirs.

Reports of the comparison will be accessible in dir/reports. All matching code lines are listed in the report.
