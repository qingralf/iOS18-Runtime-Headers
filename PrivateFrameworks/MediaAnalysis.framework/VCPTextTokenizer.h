/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPTextTokenizer : NSObject {
    NSDictionary * _bpeRanks;
    NSDictionary * _bytesToUnicode;
    NSMutableDictionary * _cache;
    NSDictionary * _decoder;
    NSDictionary * _encoder;
}

- (void).cxx_destruct;
- (id)bytePairEncoding:(id)arg1;
- (id)encode:(id)arg1;
- (id)init;
- (id)textPreProcessing:(id)arg1;
- (id)whitespaceClean:(id)arg1;

@end