/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServiceExtensions.framework/ServiceExtensions
 */

@interface _SEBrowserProcess : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inner;
}

+ (struct { unsigned int x1[8]; })_currentAuditToken;
+ (bool)checkBrowserEngineEntitlementForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (bool)checkBrowserEngineEntitlementForCurrentProcess;

- (void).cxx_destruct;
- (id)init;

@end