/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CiderAudioServer.framework/CiderAudioServer
 */

@interface CiderService : NSObject

+ (bool)IsSimulatedDevice:(unsigned int)arg1;
+ (void)SendRouteConfiguration:(id)arg1 withError:(id*)arg2;
+ (void)SendSessionConfiguration:(id)arg1 withError:(id*)arg2;
+ (bool)ServiceIsRunning;
+ (void)StartService;
+ (void)StopService;

@end