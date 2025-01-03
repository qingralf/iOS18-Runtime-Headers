/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMStorePublisherManager : NSObject {
    BMAccessClient * _accessClient;
    BMStoreConfig * _config;
    Class  _eventDataClass;
    _PASLock * _protectedState;
    NSString * _streamIdentifier;
    NSString * _useCase;
}

- (void).cxx_destruct;
- (id)_createStreamReaderForRemoteName:(id)arg1 eventDataClass:(Class)arg2;
- (id)_publisherForDevice:(id)arg1 options:(id)arg2;
- (id)_publishersForDevices:(id)arg1 includeLocal:(bool)arg2 options:(id)arg3;
- (id)_streamReaderWithRemoteName:(id)arg1;
- (id)initWithStreamIdentifier:(id)arg1 streamConfig:(id)arg2 accessClient:(id)arg3 eventDataClass:(Class)arg4 useCase:(id)arg5;
- (id)publisherForDevice:(id)arg1 options:(id)arg2;
- (id)publisherWithOptions:(id)arg1;
- (id)publishersForDevices:(id)arg1 includeLocal:(bool)arg2 options:(id)arg3 pipeline:(id /* block */)arg4;

@end
