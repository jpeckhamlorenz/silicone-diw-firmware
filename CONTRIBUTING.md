# Notes for Contributors

The following content is for potential contributors or developers of the project, including branch specifications, collaboration conventions, etc.

## :twisted_rightwards_arrows: Branch Specification

- `main`: Default branch for **verified versions only**
  - :x: ***Do not commit directly to `main`** unless you are fully aware of the consequences*
  - :white_check_mark: Instead, use **pull requests** to merge changes to `main`
- **Development branches**: Branches for new features, optimizations, refactors and other code changes
  - `dev/Marlin`: Potential edits to existing Marlin firmware
  - `dev/Klipper`: Development of Klipper firmware
  - `dev/G-Code_VSCode_Config`: Development of necessary settings for VScode G-Code IntelliSense extensions. Details will be given in [`.vscode`](./.vscode) folder.
- **Test branches**: Branches used for testing (like writing testcases, etc.) for corresponding development branches
  - `test/Marlin`: Potential tests for potential edits on `dev/Marlin`
  - `test/Klipper`: Tests for edits on `dev/Klipper`
- **Temporary branches**: Branches created temporarily for purposes like experiments, aggressive trials, etc. They may be deleted afterwards
  - These branches take the form of **`temp/<branch name>`**, and since they are temporary they won't be described one by one
  - *:exclamation: When in doubt, create a temporary branch and commit on that branch. Once verified, merge to the originally target branch*

## :bookmark_tabs: Commit Message

For details please refer to <https://gist.github.com/qoomon/5dfcdf8eec66a051ecd85625518cfd13>. However, we don't need the full commit message convention in this project, and we only recommend **`<type>: <description>`** as the desired format.
