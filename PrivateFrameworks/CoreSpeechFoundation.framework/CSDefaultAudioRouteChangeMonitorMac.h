/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor

+ (id)sharedInstance;

- (unsigned int)defaultOutputAudioDeviceID;
- (bool)isDefaultInputBuiltInMic;
- (bool)isDefaultOutputBultInSpeaker;

@end