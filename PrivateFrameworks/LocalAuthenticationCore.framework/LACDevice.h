/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDevice : NSObject

@property (nonatomic, readonly) bool isClarityBoardRunning;
@property (nonatomic, readonly) bool isDynamicIslandAvailable;
@property (nonatomic, readonly) bool usesFrontBoardServicesForRemoteUI;

+ (id)sharedInstance;

- (bool)isClarityBoardRunning;
- (bool)isDynamicIslandAvailable;
- (bool)usesFrontBoardServicesForRemoteUI;

@end