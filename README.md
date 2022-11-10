<div align="center"><img src="https://github.com/brainboxdotcc/DPP/blob/master/docpages/DPP-markdown-logo.png?raw=true"/>
<h1>Dpp Visual Studio Template</h1>
    <b>
        <p>A neat setup for C++ Discord bot, using Dpp version 10.0.21</p>
    </b>

[![GitHub issues](https://img.shields.io/github/issues/Harshfeudal-Projects/setup-vs)](https://github.com/Harshfeudal-Projects/Raiden-Shogun/issues)
[![GitHub license](https://img.shields.io/github/license/Harshfeudal-Projects/setup-vs?color=brightgreen)](https://github.com/Harshfeudal-Projects/Raiden-Shogun/blob/main/LICENSE)
</div>

### :pencil: About this project
- A setup repository for Visual Studio to make a Discord bot using D++ version 10.0.21
- This project is owned by [@harshfeudal](https://github.com/harshfeudal). You can join my Discord server [here](https://discord.gg/BAk2CXpRAT)!

### 📚 Libraries and version
These are libraries that we're using in this project:
- [Dpp](https://github.com/brainboxdotcc/DPP) - version `10.0.21` (latest)
- [Spdlog](https://github.com/gabime/spdlog) - version `1.11.0` (latest)

The bot code example is officially extracted from [Raiden Shogun](https://github.com/Harshfeudal-Projects/Raiden-Shogun) by Harshfeudal. If you see any error in this code please contact to me so that I can fix it and sync with this repository!

### 🚨 Generate and use
 This project was made for Visual Studio, however you cannot see my `.sln` file to open because I have ignored it. To use this project, you should generate it by using [Premake](https://premake.github.io/).

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
 This project is currently supporting the following technologies:
 - Microsoft Windows 10 or later
 - Visual Studio/Visual C++ platform 
 - C++ 17 `ISO/IEC 14882`

 Other cases may or may not compile and can lead to unexpected and unwanted behavior.

 ### 🤝 Support me
 - Please leave me a star if you like it. Thank you very much!
 - You can probably help me to develop this project too by DMing me on my [Discord profile (Harshfeudal#0001)](https://discord.com/users/622450109317251088).

 ### :computer: Contribution and Pull Request
  I'd be very glad to see if you have anything new to help and support me. To do that, please create a PR and please make sure you've tested the code by using your bot. I won't bite you if you're doing something wrong, but just make sure that you need to test it clearly before I merge it.

 ### 👷 Questions - Bugs
 - Please open an ISSUE TEMPLATE for asking question or report if this repo has bugs!
 - More command example: please visit [here](https://github.com/Harshfeudal-Projects/Raiden-Shogun)!
 - The FAQ markdown list will be added when I saw a lot of same question in this repository issue.

 ### :sparkling_heart: Special thanks
  - My companions on D++ Discord server!
  - And you too, for staring this project and encourage me to do it!
