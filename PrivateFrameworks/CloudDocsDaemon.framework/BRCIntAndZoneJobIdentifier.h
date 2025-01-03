/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying> {
    long long  _intID;
    BRCZoneRowID * _zoneRowID;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCZoneRowID *zoneRowID;

- (void).cxx_destruct;
- (id)columns;
- (id)columnsValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2;
- (long long)intID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIntAndZoneJobIdentifier:(id)arg1;
- (id)jobsDescription;
- (id)matchingJobsWhereSQLClause;
- (id)zoneRowID;

@end
