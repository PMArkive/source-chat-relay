<p align="center">
    <img src="assets/logo/cloud-computing.svg" width="250">
</p>

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Getting started](#getting-started)
    - [Relay Server](#relay-server)
    - [Game server](#game-server)
- [Bot Commands](#bot-commands)
- [Filter](#filter)
- [Troubleshooting](#troubleshooting)
    - [Game server is not connecting to the relay server?](#game-server-is-not-connecting-to-the-relay-server)
    - [I'm getting errno 3 from the plugin](#im-getting-errno-3-from-the-plugin)
- [Recommended hosts](#recommended-hosts)
- [Credits](#credits)
- [License](#license)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## Introduction

<p>
    <a href="https://travis-ci.com/rumblefrog/source-chat-relay">
        <img src="https://img.shields.io/travis/com/rumblefrog/source-chat-relay.svg?style=for-the-badge">
    </a>
    <a href="https://discord.gg/TZ4BsrQ">
        <img src="https://img.shields.io/discord/443915420324331521.svg?style=for-the-badge">
    </a>
    <a href="https://github.com/rumblefrog/source-chat-relay/issues">
        <img src="https://img.shields.io/github/issues/rumblefrog/source-chat-relay.svg?style=for-the-badge">
    </a>
    <a href="https://github.com/rumblefrog/source-chat-relay/blob/master/LICENSE">
        <img src="https://img.shields.io/github/license/rumblefrog/source-chat-relay.svg?style=for-the-badge">
    </a>
    <a href="https://www.patreon.com/bePatron?u=962681">
        <img src="assets/become_a_patron_button.png" height="28">
    </a>
</p>

<img src="assets/preview.gif">

Communicate between Discord & In-Game, monitor server without being in-game, control the flow of messages and user base engagement!

## Features
 - Receive and send messages bidrectionally
 - Channel configuration for powerful setups
 - Setup is incrediblily easy with Discord bot commands and simple config files
 - Upon disconnect, game servers will attempt to reconnect at a fixed interval
 - Filter out certain unwanted messages using regex expressions
 - Set ingame prefixes to send a message with ability to configure flag permission for the prefix

## Prerequisites
 - Server to host the relay binary on (with MySQL if not external)
 - Source game server with the [socket](https://forums.alliedmods.net/showthread.php?t=67640) extension
 - A Discord bot token (https://discordapp.com/developers/applications/)

## Getting started
 - [Setup Wiki](https://github.com/rumblefrog/source-chat-relay/wiki/Setup)

## Credits
 - Ron for being a human linter

## License

This project is licensed under GPL 3.0

Icons made by <a href="https://www.flaticon.com/authors/itim2101" title="itim2101">itim2101</a> from <a href="https://www.flaticon.com/" title="Flaticon">www.flaticon.com</a> is licensed by <a href="http://creativecommons.org/licenses/by/3.0/" title="Creative Commons BY 3.0" target="_blank">CC 3.0 BY</a>