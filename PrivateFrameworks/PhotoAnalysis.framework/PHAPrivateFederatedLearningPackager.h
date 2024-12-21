/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPrivateFederatedLearningPackager : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierLargeRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierSmallRange;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierLargeRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierSmallRange;

- (id)_flattenTrainingResults:(id)arg1;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
- (id)dataPackageFromTrainingResults:(id)arg1 error:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierLargeRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierSmallRange;

@end