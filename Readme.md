# SDLC Activity Based Learning

Visit [Pages for Report -optional](using github.io option)

| Build                                                                                                                                                                                     | Code Quality                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 | Unity                                                                                                                                                                                                 | [Git Inspector](using github.io option)                                                                                                                                                                      |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| [![C/C++ CI](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/c-cpp.yml) | [![Static Cppcheck](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/cppcheck.yml) [![Dynamic Valgrind](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/CodeQuality_Dynamic.yml) [![CI-Coverage](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/gcov.yml/badge.svg?branch=main)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/gcov.yml) ![code inspector](https://www.code-inspector.com/project/25102/score/svg) ![code grade](https://www.code-inspector.com/project/25102/status/svg) | [![Unity - Unit Testing](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/unity.yml/badge.svg)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/unity.yml) | [![Git Inspector](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/AnkitDhiman2/TextPad_miniProject/actions/workflows/gitinspector.yml) |

<a href="https://frontend.code-inspector.com/public/user/github/AnkitDhiman2">
   <img src="https://code-inspector.com/public/badge/user/github/AnkitDhiman2?style=dark" alt="code inspector badge" />
</a>

## Folder Structure

| Folder             | Description                                   |
| ------------------ | --------------------------------------------- |
| `1_Requirements`   | Documents detailing requirements and research |
| `2_Design`         | Documents specifying design details           |
| `3_Implementation` | All code and documentation                    |
| `4_Test_plan`      | Documents with test plans and procedures      |

## Contributors List and Summary

| SF No.   | Name        | Features                 | Issuess Raised | Issues Resolved | No Test Cases | Test Case Pass |
| -------- | ----------- | ------------------------ | -------------- | --------------- | ------------- | -------------- |
| `304283` | Ankit Kumar | TextPad password maneger | Nil            | Nil             | 20            | 20             |

## Challenges Faced and How Was It Overcome

1. It was my first experince with procedural language after a long time -> Learnig material helped a lot
2. Whenever I needed to use GDB I had to create gdb file by mannualy typing the compile command -> solved by creating a debug command in makefile.
3. Its was difficult to manage the overall project -> solved by finishing and testing one part at a time
4. Including files -> later resolved

## How to Run

### - On Linux

1. Type folowing commands in terminal :-

   - sudo apt update

   - sudo apt install build-essentials

2. Open the terminal in Implementation folder.
3. Run the following command :-

   - make
   - make run

### - On Windows

1. Follow [this](https://code.visualstudio.com/docs/languages/cpp) tutorial to install gcc compiler to your windows machine.

2. Open the project Implementation directory inside command prompt.
3. Run the following commands inside command prompt
   - make windows
   - make run_windows

## Learning Resources

1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)
