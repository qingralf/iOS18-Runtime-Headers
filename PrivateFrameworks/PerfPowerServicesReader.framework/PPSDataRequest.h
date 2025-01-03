/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader
 */

@interface PPSDataRequest : NSObject <NSSecureCoding> {
    NSSet * _metrics;
    NSPredicate * _predicate;
    long long  _requestType;
    NSDateInterval * _timeFilter;
}

@property (readonly, copy) NSString *category;
@property (copy) NSSet *metrics;
@property (readonly) NSPredicate *predicate;
@property (readonly) long long requestType;
@property (readonly, copy) NSString *subsystem;
@property (readonly) NSDateInterval *timeFilter;
@property (readonly) NSPredicate *valueFilter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestType:(long long)arg1 metrics:(id)arg2 predicate:(id)arg3 timeFilter:(id)arg4;
- (id)metrics;
- (id)predicate;
- (long long)requestType;
- (void)setMetrics:(id)arg1;
- (id)subsystem;
- (id)timeFilter;
- (id)valueFilter;

@end
