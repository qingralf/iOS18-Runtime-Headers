/* Generated by RuntimeBrowser.
 */

@protocol TSCHStyleOwning <NSObject, TSCHStyleVending>

@required

- (TSCHChartInfo *)chartInfo;
- (TSPObjectContext *)context;
- (NSArray *)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (TSCHChartModel *)model;
- (TSSStyle *)nonstyle;
- (NSString *)operationPropertyNameFromGenericProperty:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (TSSStyle *)style;
- (NSArray *)swapTuplesForMutations:(NSDictionary *)arg1 forImport:(bool)arg2;
- (NSArray *)swapTuplesForParagraphStyleMutations:(NSDictionary *)arg1 forReferencingProperty:(int)arg2;
- (NSArray *)transformedTuplesWithTuple:(TSCHPropertyMutationTuple *)arg1;
- (id)valueForProperty:(int)arg1;

@optional

- (void)propertiesWereMutated:(TSSPropertySet *)arg1;

@end
