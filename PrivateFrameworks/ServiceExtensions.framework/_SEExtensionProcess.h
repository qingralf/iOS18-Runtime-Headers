/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServiceExtensions.framework/ServiceExtensions
 */

@interface _SEExtensionProcess : NSObject

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;

- (struct { unsigned int x1[8]; })auditToken;
- (id)grantCapabilities:(id)arg1 error:(id*)arg2;
- (id)grantCapability:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)invalidate;
- (id)makeLibXPCConnectionError:(id*)arg1;

@end
