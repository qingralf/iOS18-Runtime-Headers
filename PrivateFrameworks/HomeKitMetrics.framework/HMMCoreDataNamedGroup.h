/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMCoreDataNamedGroup : NSManagedObject

@property (nonatomic, retain) NSSet *counters;
@property (nonatomic, readonly) <HMMGroupSpecifier> *groupSpecifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *valueStatistics;

+ (id)fetchRequest;

- (id)groupSpecifier;

@end
