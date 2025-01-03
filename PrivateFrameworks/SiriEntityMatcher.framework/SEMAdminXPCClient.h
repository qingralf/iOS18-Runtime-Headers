/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMAdminXPCClient : SEMXPCClient <SEMAdminService>

- (oneway void)beginEvaluation:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)endEvaluation:(id /* block */)arg1;
- (id)init;
- (oneway void)triggerMaintenance:(bool)arg1 completion:(id /* block */)arg2;

@end
