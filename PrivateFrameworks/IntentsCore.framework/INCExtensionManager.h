/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(bool)arg3 requiresTrustCheck:(bool)arg4 completion:(id /* block */)arg5;
- (id)init;

@end
