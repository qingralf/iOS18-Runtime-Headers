/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserType3Focus : HMFObject {
    bool  _enabled;
    NSDate * _updatedTime;
    bool  _userActionTriggered;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSDate *updatedTime;
@property (getter=isUserActionTriggered, nonatomic, readonly) bool userActionTriggered;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnabled:(bool)arg1 updatedTime:(id)arg2 userActionTriggered:(bool)arg3;
- (bool)isEnabled;
- (bool)isUserActionTriggered;
- (id)updatedTime;

@end
