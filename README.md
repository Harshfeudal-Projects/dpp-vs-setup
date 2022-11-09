<div align="center"><img src="docpages/DPP-markdown-logo.png" alt="DPP"/>
<h1>Dpp Visual Studio Template</h1>
    <b>
        <p>A neat setup for C++ Discord bot, using Dpp version 10.0.21</p>
    </b>

[![GitHub issues](https://img.shields.io/github/issues/Harshfeudal-Projects/Raiden-Shogun)](https://github.com/Harshfeudal-Projects/Raiden-Shogun/issues)
[![GitHub license](https://img.shields.io/github/license/Harshfeudal-Projects/Raiden-Shogun?color=brightgreen)](https://github.com/Harshfeudal-Projects/Raiden-Shogun/blob/main/LICENSE)
</div>

### :pencil: About this project
- This project is owned by [@harshfeudal](https://github.com/harshfeudal). You can join my Discord server [here](https://discord.gg/BAk2CXpRAT)!
- This respiratory is under-construction! I'll update it as soon as possible.
- I'm not highly recommended you to use C++ to code a Discord bot, instead of JavaScript or others library. To know how's this project works, you should learn some basics about C++ so that you can know what I am doing.

### 📚 Libraries and version
These are libraries that we're using in this project:
- [Dpp](https://github.com/brainboxdotcc/DPP) - version `10.0.21` (latest)
- [Spdlog](https://github.com/gabime/spdlog) - version `1.11.0` (latest)

 For downloading **latest version**, please click [here](https://github.com/Harshfeudal-Projects/Raiden-Shogun/releases).

### 🚨 Generate and use
 This project was made by Visual Studio, so basically you cannot see my `.sln` file to open because I have ignored it. To use this project, you should generate it by using [Premake](https://premake.github.io/).

 So basically, I have written `premake5.lua` for generating it. Here are these steps:
 1. On that terminal, type:
 ```
 $ premake5 vs[version]
 ```
 Example: If you're using Visual Studio 2022 like me, just do like this:
 ```
 $ premake5 vs2022
 ```
 2. Add your bot token and client secret in `config.json` file:
 ```json
 {
    "token": "[add your bot token in here]"
 }
 ```

 ### 📜 Some notes
 This project is currently support for who is in these cases:
 - Microsoft Windows 10 or up
 - Visual Studio platform 
 - C++ 17 `ISO/IEC 14882`

 Other cases may not compile or crash occurs.

 ### 🤝 Support me
 - Please leave me a star if you like it. Thank you very much!
 - You can probably help me to develop this project too by DMing me on my [Discord profile (Harshfeudal#0001)](https://discord.com/users/622450109317251088).

 ### :computer: Contribution and Pull Request
  I'd probably glad to see if you have anything new to help and support me. To do that, please make one and before you do that, just make sure you've tested the code by using your bot. I won't bite you if you do wrong, but just make sure that you need to test it clearly before I merge it.

 ### 👷 Questions - Bugs
 - Please open an ISSUE TEMPLATE for asking question or report if this repo has bugs!
 - More command example: please visit [here](https://github.com/Harshfeudal-Projects/Raiden-Shogun)!

 ### :sparkling_heart: Special thanks
  - My companions on D++ Discord server!
  - And you too, for staring this project and encourage me to do it!