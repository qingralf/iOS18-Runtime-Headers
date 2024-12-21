/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitCore.framework/HomeKitCore
 */

@interface HMCDUserSharedSettingsModel : NSManagedObject

@property (nonatomic) bool isDolbyAtmosEnabled;
@property (nonatomic) bool isExplicitContentAllowed;
@property (nonatomic) bool isLosslessMusicEnabled;
@property (nonatomic) bool isPlaybackInfluencesEnabled;
@property (nonatomic) bool isSiriIdentifyVoiceEnabled;
@property (nonatomic) bool isiTunesAccountAllowed;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, retain) HMCDUserModel *user;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end