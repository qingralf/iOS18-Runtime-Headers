/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCDataResourceWriteAccess : NSObject {
    BMResourceContainer * _containerOverride;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)_resolveContainer:(id)arg1;
- (id)initWithContainerOverride:(id)arg1;
- (bool)performMaintenanceActivity:(id /* block */)arg1 accessAssertion:(id)arg2;
- (id)requestAccess:(id*)arg1 forResource:(id)arg2 withMode:(unsigned long long)arg3 error:(id*)arg4;
- (id)setWriterForSet:(id)arg1 accessAssertion:(id)arg2;

@end