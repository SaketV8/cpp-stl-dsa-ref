# script to build the readme from the cpp stl source code.
import os
import re

readme_ascii_art = r"""


 /$$$$$$$  /$$$$$$$$  /$$$$$$  /$$$$$$$  /$$      /$$ /$$$$$$$$                         /$$
| $$__  $$| $$_____/ /$$__  $$| $$__  $$| $$$    /$$$| $$_____/                        | $$
| $$  \ $$| $$      | $$  \ $$| $$  \ $$| $$$$  /$$$$| $$           /$$$$$$/$$$$   /$$$$$$$
| $$$$$$$/| $$$$$   | $$$$$$$$| $$  | $$| $$ $$/$$ $$| $$$$$       | $$_  $$_  $$ /$$__  $$
| $$__  $$| $$__/   | $$__  $$| $$  | $$| $$  $$$| $$| $$__/       | $$ \ $$ \ $$| $$  | $$
| $$  \ $$| $$      | $$  | $$| $$  | $$| $$\  $ | $$| $$          | $$ | $$ | $$| $$  | $$
| $$  | $$| $$$$$$$$| $$  | $$| $$$$$$$/| $$ \/  | $$| $$$$$$$$ /$$| $$ | $$ | $$|  $$$$$$$
|__/  |__/|________/|__/  |__/|_______/ |__/     |__/|________/|__/|__/ |__/ |__/ \_______/
                                                                                           
                                                                                           
                                                                                           

Building C++ STL Quick Reference 🛠️
"""

print(readme_ascii_art)

FILE_NAME = "main.cpp"

def extract_number(folder_name):
    # Extracts the leading number from a folder name; defaults to 0 if no number is found.
    match = re.match(r'^(\d+)', folder_name)
    return int(match.group()) if match else float('inf')  # Non-numeric folders, if any, go last.

def append_hello_files_to_markdown(base_folder, markdown_file):
    # Clear existing content or create the file with prewritten text
    
    # adding content from PRE_README.md to README.md
    prewritten_md_content = ""
    with open("./utils/PRE_README.md", 'r') as pre_md_file:
        prewritten_md_content = pre_md_file.read();
    
    # Overwrite the markdown file with the prewritten text
    with open(markdown_file, 'w') as md_file:
        md_file.write(prewritten_md_content + "\n\n")

    # List and sort the subfolders numerically
    subfolders = sorted(
        [f.path for f in os.scandir(base_folder) if f.is_dir()],
        key=lambda x: extract_number(os.path.basename(x))
    )
   

     # Traverse each sorted subfolder
    for subfolder in subfolders:
        cpp_file_path = os.path.join(subfolder, FILE_NAME)
        
        # Check if file exists in the subfolder
        if os.path.isfile(cpp_file_path):        
            # Read content of file
            with open(cpp_file_path, 'r') as cpp_file:
                cpp_code_content = cpp_file.read()
                
            with open(markdown_file, 'a') as md_file:
                md_file.write(f"<details close>\n")
                md_file.write(f"<summary> { os.path.basename(subfolder) } </summary>\n")
                md_file.write(f"\n<h3 align=\"center\"> ⚡ {os.path.basename(subfolder)} </h3>\n")
                md_file.write("\n" + "```cpp\n" + cpp_code_content + "\n```\n")
                md_file.write(f"</details>\n")
    
    # adding content from POST_README.md to README.md
    postwritten_md_content = ""
    with open("./utils/POST_README.md", 'r') as post_md_file:
        postwritten_md_content = post_md_file.read();
        
    with open(markdown_file, 'a') as md_file:
        md_file.write("\n\n" + postwritten_md_content)
    
    print("C++ STL Quick Reference Generated ✅")
    print()
    print("Now you can commit changes to github.com 😻")



# Usage
base_folder = "./cpp-stl-code"  # The folder containing subfolders with main.go files+
markdown_file = "./README.md"  # The markdown file with prewritten text
append_hello_files_to_markdown(base_folder, markdown_file)