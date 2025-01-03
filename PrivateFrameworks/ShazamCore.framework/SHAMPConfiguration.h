/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore
 */

@interface SHAMPConfiguration : NSObject {
    SHOffers * _offers;
    SHStreamingProviders * _streamingProviders;
}

@property (nonatomic, readonly) SHOffers *offers;
@property (nonatomic, readonly) SHStreamingProviders *streamingProviders;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;
- (id)offerResponseFromResponse:(id)arg1;
- (id)offers;
- (id)streamingProviders;
- (id)streamingProvidersResponseFromResponse:(id)arg1;

@end
