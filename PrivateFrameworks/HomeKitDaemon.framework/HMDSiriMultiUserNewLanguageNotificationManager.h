/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate, HMFLogging> {
    HMDSiriMultiUserNewLanguageNotificationManagerContext * _context;
}

@property (readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)arg1;
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;
- (id)context;
- (id)initWithContext:(id)arg1;
- (void)mediaAccessory:(id)arg1 didUpdateSoftwareToVersion:(id)arg2;

@end
