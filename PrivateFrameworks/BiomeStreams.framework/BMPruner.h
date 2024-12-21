/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMPruner : NSObject {
    NSString * _remote;
    BMStoreStream * _storeStream;
}

+ (id)new;

- (void).cxx_destruct;
- (void)deleteEventsPassingTest:(id /* block */)arg1;
- (bool)deleteStoreEvent:(id)arg1;
- (void)deleteWithPolicy:(id)arg1 eventsPassingTest:(id /* block */)arg2;
- (id)init;
- (id)initWithStoreStream:(id)arg1 remote:(id)arg2;

@end