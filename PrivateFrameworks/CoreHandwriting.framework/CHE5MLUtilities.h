/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHE5MLUtilities : NSObject

+ (struct __IOSurface { }*)createInputSurfaceForMultiArray:(id)arg1;
+ (id)createInputSurfacesForFeatureProvider:(id)arg1;
+ (id)featureProviderForE5RTOutputs:(id)arg1 functionDescriptor:(id)arg2 dataType:(long long)arg3 error:(id*)arg4;
+ (id)multiArrayForOutput:(id)arg1 inNamedObjects:(id)arg2 functionDescriptor:(id)arg3 dataType:(long long)arg4 error:(id*)arg5;
+ (id)newE5RTExecutionOutputsForFunctionDescriptor:(id)arg1 error:(id*)arg2;
+ (id)newInputsForFunctionDescriptor:(id)arg1 surfaces:(id)arg2 error:(id*)arg3;

@end
