/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PoirotBlocks.framework/PoirotBlocks
 */

@interface PoirotBlocks.RawPayload : BMEventBase <BMStoreData> {
    void data;
    void dataVersion;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)serialize;

@end