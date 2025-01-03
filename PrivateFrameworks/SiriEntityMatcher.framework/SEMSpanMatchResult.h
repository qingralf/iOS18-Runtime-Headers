/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMSpanMatchResult : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _duplicateIndex;
    NSObject<SEMEntityInfo> * _entityInfo;
    NSArray * _fieldMatches;
    float  _score;
    SEMSpanInfo * _spanInfo;
}

@property (nonatomic, readonly) unsigned int duplicateIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)duplicateIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)entityInfo;
- (id)fieldMatches;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityInfo:(id)arg1 spanInfo:(id)arg2 fieldMatches:(id)arg3 duplicateIndex:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpanMatchResult:(id)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (id)spanInfo;
- (id)spanValue;
- (id)toOntologyGraph:(id*)arg1;
- (id)toOntologyGraphData:(id*)arg1;

@end
