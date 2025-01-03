/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogStatisticsAggregation : NSObject {
    unsigned long long  _eventBytes;
    unsigned long long  _eventCount;
    NSString * _formatString;
    NSString * _label;
    NSMutableDictionary * _labelToChildTiers;
    NSNumber * _senderOffset;
    NSUUID * _senderUUID;
    unsigned char  _tier;
}

@property (nonatomic) unsigned long long eventBytes;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSMutableDictionary *labelToChildTiers;
@property (nonatomic, readonly) NSNumber *senderOffset;
@property (nonatomic, readonly) NSUUID *senderUUID;
@property (nonatomic, readonly) unsigned char tier;
@property (nonatomic, readonly) NSString *tierString;

+ (id)_labelFromProxy:(id)arg1 forTier:(unsigned char)arg2;
+ (id)_stringForTier:(unsigned char)arg1;

- (void).cxx_destruct;
- (void)_addToChildren:(id)arg1;
- (void)_addTraceEvent:(id)arg1;
- (unsigned char)_childTier;
- (id)_descendingChildren;
- (id)_descriptionTierCap:(unsigned char)arg1 withDepth:(unsigned long long)arg2;
- (id)_dictRepresentation:(unsigned char)arg1;
- (id)_tracePointSizeString;
- (id)aggregationForTier:(unsigned char)arg1 withLabel:(id)arg2;
- (id)aggregationsForTier:(unsigned char)arg1;
- (id)descriptionWithTierCap:(unsigned char)arg1;
- (unsigned long long)eventBytes;
- (unsigned long long)eventCount;
- (id)formatString;
- (id)initWithLabel:(id)arg1 tier:(unsigned char)arg2;
- (id)initWithOSLogProxy:(id)arg1 tier:(unsigned char)arg2;
- (id)jsonDescription:(unsigned long long)arg1;
- (id)jsonDescription:(unsigned long long)arg1 tierCap:(unsigned char)arg2;
- (id)label;
- (id)labelToChildTiers;
- (id)senderOffset;
- (id)senderUUID;
- (void)setEventBytes:(unsigned long long)arg1;
- (void)setEventCount:(unsigned long long)arg1;
- (unsigned char)tier;
- (id)tierString;

@end
