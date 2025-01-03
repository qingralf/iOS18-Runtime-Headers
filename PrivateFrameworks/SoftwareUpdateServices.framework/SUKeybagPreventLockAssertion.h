/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUKeybagPreventLockAssertion : NSObject <BSInvalidatable> {
    struct __MKBAssertion { } * _assertion;
    bool  _invalidated;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithKeybagAssertion:(struct __MKBAssertion { }*)arg1;
- (void)invalidate;

@end
