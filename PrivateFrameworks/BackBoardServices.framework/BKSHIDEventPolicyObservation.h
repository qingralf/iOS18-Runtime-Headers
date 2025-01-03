/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventPolicyObservation : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    int  _pid;
    long long  _policyStatus;
    BKSHIDEventDeferringToken * _token;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BKSHIDEventDisplay *display;
@property (nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) long long policyStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BKSHIDEventDeferringToken *token;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)pid;
- (long long)policyStatus;
- (id)token;

@end
