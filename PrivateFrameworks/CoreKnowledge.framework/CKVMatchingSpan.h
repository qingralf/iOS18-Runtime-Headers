/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVMatchingSpan : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _beginIndex;
    unsigned long long  _endIndex;
    NSString * _itemId;
    CKVMatchingSpanMetadata * _metadata;
    USOGraph * _ontologyGraph;
    NSString * _ontologyLabel;
    NSString * _originAppId;
    float  _score;
    NSString * _semanticValue;
}

@property (nonatomic, readonly) unsigned long long beginIndex;
@property (nonatomic, readonly) unsigned long long endIndex;
@property (nonatomic, readonly) NSString *itemId;
@property (nonatomic, readonly) CKVMatchingSpanMetadata *metadata;
@property (nonatomic, readonly) USOGraph *ontologyGraph;
@property (nonatomic, readonly) NSString *ontologyLabel;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) NSString *semanticValue;

+ (id)_extractOntologyLabelFromGraph:(id)arg1;
+ (id)matchingSpanFromSpanMatchResult:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)beginIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOntologyGraph:(id)arg1 ontologyLabel:(id)arg2 semanticValue:(id)arg3 beginIndex:(unsigned long long)arg4 endIndex:(unsigned long long)arg5 itemId:(id)arg6 originAppId:(id)arg7 score:(float)arg8 matchScore:(float)arg9 priorInfo:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMatchingSpan:(id)arg1;
- (id)itemId;
- (id)metadata;
- (id)ontologyGraph;
- (id)ontologyGraphData:(id*)arg1;
- (id)ontologyLabel;
- (id)originAppId;
- (float)score;
- (id)semanticValue;

@end