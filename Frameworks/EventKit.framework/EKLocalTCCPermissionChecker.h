/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKLocalTCCPermissionChecker : NSObject <CADTCCPermissionChecker>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventAuthorization;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long remindersAuthorization;
@property (readonly) Class superclass;

- (unsigned long long)_authorizationForService:(struct __CFString { }*)arg1;
- (unsigned long long)eventAuthorization;
- (unsigned long long)remindersAuthorization;
- (void)requestAuthorization:(unsigned long long)arg1 forService:(struct __CFString { }*)arg2 clientDictionary:(id)arg3 completion:(id /* block */)arg4;

@end