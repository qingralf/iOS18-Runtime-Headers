/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULocationDevice : NSObject <NAIdentifiable> {
    bool  _currentDevice;
    NSString * _identifier;
    NSString * _name;
}

@property (getter=isCurrentDevice, nonatomic, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithHMDevice:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 currentDevice:(bool)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 isThisDevice:(bool)arg3;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
