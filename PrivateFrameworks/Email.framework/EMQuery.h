/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMQuery : NSObject <EFLoggable, EMQueryBuilder, NSCopying, NSSecureCoding> {
    NSString * _label;
    long long  _limit;
    NSPredicate * _predicate;
    unsigned long long  _queryOptions;
    NSArray * _sortDescriptors;
    CSSuggestion * _suggestion;
    Class  _targetClass;
    NSDictionary * _targetClassOptions;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long limit;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) unsigned long long queryOptions;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic, copy) CSSuggestion *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, retain) Class targetClass;
@property (nonatomic, copy) NSDictionary *targetClassOptions;

+ (bool)_isValidSortDescriptor:(id)arg1 forTargetClass:(Class)arg2;
+ (void)addValidSortDescriptorKeyPaths:(id)arg1 forTargetClass:(Class)arg2;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToQuery:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 builder:(id /* block */)arg4;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 queryOptions:(unsigned long long)arg5 targetClassOptions:(id)arg6 label:(id)arg7;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 label:(id)arg5;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 targetClassOptions:(id)arg5 label:(id)arg6;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 suggestion:(id)arg4 limit:(long long)arg5 queryOptions:(unsigned long long)arg6 targetClassOptions:(id)arg7 label:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)label;
- (long long)limit;
- (id)predicate;
- (unsigned long long)queryOptions;
- (id)queryWithPredicate:(id)arg1;
- (id)queryWithTargetClass:(Class)arg1 predicate:(id)arg2;
- (void)setLabel:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setQueryOptions:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTargetClass:(Class)arg1;
- (void)setTargetClassOptions:(id)arg1;
- (id)sortDescriptors;
- (id)suggestion;
- (Class)targetClass;
- (id)targetClassOptions;

@end
