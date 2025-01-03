/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
 */

@interface SHClusterLoaderRequest : NSObject {
    NSURL * _outputURL;
    NSURL * _sourceURL;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic, readonly) bool shouldDeleteExistingDatabaseAtOutputURL;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 configuration:(id)arg2;
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 outputURL:(id)arg3 configuration:(id)arg4;
- (id)outputURL;
- (bool)shouldDeleteExistingDatabaseAtOutputURL;
- (id)sourceURL;
- (void)sourceURLForRequestForStorefront:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (long long)type;

@end
