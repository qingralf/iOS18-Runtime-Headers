/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYInputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _items;
    id /* block */  _onComplete;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    SYCompressedFileInputStream * _stream;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeAllItemsWithError:(id)arg1;
- (void)_tryToReadData;
- (void)close;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)readDataOfLength:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (void)whenComplete:(id /* block */)arg1;

@end
