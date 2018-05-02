# yubikey-otp-miner
A quick Arduino program that helps collect YubiKey OTP tokens.

## Parts

This code will work on probably any Arduino. I used the [Arduino UNO](https://www.ebay.com/sch/i.html?_sacat=0&_nkw=arduino+uno&_frs=1) as I had one laying around. I bought the smallest capacitor I could find at Frys: .1μF 35v. The human body is rated at 100pF capacitance, so I figured something close would help emulate when you touch the token.

## Why? 

I couldn't find any examples that did this with an Arduino, so I decided to throw one together really quick. 

## Speed

I tuned the program so that it will collect the tokens as fast as possible. If you try to speed it up more, it will overlap with the previous token request. I was able to collect ~1 token per second. 

## Demo

[![Watch the video](https://github.com/chris408/yubikey-otp-miner/blob/master/video_snap.png)](https://www.youtube.com/watch?v=L_9wHQLdtGA)
