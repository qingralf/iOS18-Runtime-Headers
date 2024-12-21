/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IREventDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _contextIdentifier;
    long long  _eventSubType;
    long long  _eventType;
    bool  _isEligibleApp;
    bool  _isOutsideApp;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, readonly) long long eventSubType;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) bool isEligibleApp;
@property (nonatomic, readonly) bool isOutsideApp;
@property (nonatomic, readonly) NSString *name;

+ (id)atvUserInteractionEvents;
+ (id)eventDOWithAppleTVControlType:(long long)arg1;
+ (id)eventDOWithEventType:(long long)arg1 eventSubType:(long long)arg2 name:(id)arg3 bundleID:(id)arg4 contextIdentifier:(id)arg5 isOutsideApp:(bool)arg6 isEligibleApp:(bool)arg7;
+ (id)eventDOWithMediaType:(long long)arg1;
+ (id)eventDOWithMediaType:(long long)arg1 bundleID:(id)arg2;
+ (id)mediaBrokeredDeviceEvents;
+ (id)mediaUserInteractionEvents;
+ (id)pickerChoiceEvents;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contextIdentifier;
- (id)copyWithReplacementBundleID:(id)arg1;
- (id)copyWithReplacementContextIdentifier:(id)arg1;
- (id)copyWithReplacementEventSubType:(long long)arg1;
- (id)copyWithReplacementEventType:(long long)arg1;
- (id)copyWithReplacementIsEligibleApp:(bool)arg1;
- (id)copyWithReplacementIsOutsideApp:(bool)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventSubType;
- (long long)eventType;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 eventSubType:(long long)arg2 name:(id)arg3 bundleID:(id)arg4 contextIdentifier:(id)arg5 isOutsideApp:(bool)arg6 isEligibleApp:(bool)arg7;
- (bool)isBannerEvent;
- (bool)isEligibleApp;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventDO:(id)arg1;
- (bool)isOutsideApp;
- (bool)isPickerChoiceEvent;
- (bool)isUserIntentionEvent;
- (id)name;

@end