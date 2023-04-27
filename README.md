# TemplateProject

This is a base skeleton for my personal projects using clothoids.

## Requirements

### General
- git 
- cmake 
- make 
- ninja
- ruby 
  - rake (```gem install rake```)
  - colorize (```gem install colorize```)
  - zip (```gem install zip```)
  - yaml (```gem install yaml```) 
  
## Clone the repositories and setup  

### Clone
Open a terminal and run:
```
git clone https://github.com/Mattiapzz/MPTree
```

### Setup submodules

Enter in the created folder:
```
cd MPTree
```
and run 
```
ruby setup.rb
```
***NOTE*** : This command will, recursively initialize, update, sync and pull all submodules and checkout to the right branch/commit.

### Alternative setup (***not recommended***)
Run in order
```
git submodule init
git submodule update
git submodule sync
git submodule foreach --recursive git submodule init
git submodule foreach --recursive git submodule update
git submodule foreach --recursive git submodule sync
```

Then for each submodule and submodule of submodules do:
```
cd path_to_submodule_folder
git reset --hard
git checkout name_of_the_branch
cd main_folder
```
#### List of submodules and branch names
- cmake_utils: main 
- Utils: master 
- quarticRootsFlocke: master 
- Clothoids: develop

## Compile project

### Suggested way
run
```
rake 
```

