/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssetLoader : NSObject <MFAssetLoading> {
    MPCPlayerItemConfigurator * _configurator;
    <MPCAssetLoaderDelegate> * _delegate;
}

@property (nonatomic, retain) MPCPlayerItemConfigurator *configurator;
@property (nonatomic) <MPCAssetLoaderDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_configureItem:(id)arg1 playerItem:(id)arg2 error:(id*)arg3;
- (id)configurator;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)loadAssetFor:(id)arg1 task:(id)arg2 completion:(id /* block */)arg3;
- (void)loadAssetValuesFor:(id)arg1 keys:(id)arg2 completion:(id /* block */)arg3;
- (void)setConfigurator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)unloadingPlaybackAssetsOnIdleDuration;

@end
