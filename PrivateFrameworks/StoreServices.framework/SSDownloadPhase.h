/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPhase : NSObject <NSCopying, SSXPCCoding> {
    SSOperationProgress * _operationProgress;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) long long phaseType;
@property (readonly) float progressChangeRate;
@property (readonly) long long progressUnits;
@property (readonly) long long progressValue;
@property (readonly) Class superclass;
@property (readonly) long long totalProgressValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (double)estimatedSecondsRemaining;
- (id)init;
- (id)initWithOperationProgress:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)operationProgress;
- (long long)phaseType;
- (float)progressChangeRate;
- (long long)progressUnits;
- (long long)progressValue;
- (long long)totalProgressValue;

@end
