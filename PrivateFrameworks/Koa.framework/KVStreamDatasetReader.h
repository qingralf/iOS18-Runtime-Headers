/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Koa.framework/Koa
 */

@interface KVStreamDatasetReader : NSObject <KVDatasetReader> {
    NSData * _data;
    KVDatasetInfo * _datasetInfo;
    unsigned int  _offset;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datasetInfo;
- (id)description;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (unsigned long long)offset;

@end
