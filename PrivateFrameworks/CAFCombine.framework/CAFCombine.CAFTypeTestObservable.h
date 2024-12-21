/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFTypeTestObservable : NSObject <CAFTypeTestObserver> {
    void _testArrayBool;
    void _testArrayData;
    void _testArrayFloat;
    void _testArrayInt16;
    void _testArrayInt32;
    void _testArrayInt64;
    void _testArrayInt8;
    void _testArrayRawData;
    void _testArrayString;
    void _testArrayUInt16;
    void _testArrayUInt32;
    void _testArrayUInt64;
    void _testArrayUInt8;
    void _testBool;
    void _testComplexArrayItemValue;
    void _testComplexItem;
    void _testComplexItemList;
    void _testComplexItemValue;
    void _testComplexItems;
    void _testComplexNestedItemList;
    void _testComplexNestedItemValue;
    void _testComplexNestedListItemValue;
    void _testData;
    void _testDimensionUnitRawValue;
    void _testEnum;
    void _testFloat;
    void _testInt16;
    void _testInt32;
    void _testInt64;
    void _testInt8;
    void _testRawData;
    void _testString;
    void _testUInt16;
    void _testUInt32;
    void _testUInt64;
    void _testUInt8;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayBool:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayData:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayFloat:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayInt16:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayInt32:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayInt64:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayInt8:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayRawData:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayString:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayUInt16:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayUInt32:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayUInt64:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestArrayUInt8:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestBool:(bool)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexArrayItemValue:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexItem:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexItemList:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexItemValue:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexItems:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexNestedItemList:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexNestedItemValue:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestComplexNestedListItemValue:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestData:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestDimensionUnitRawValue:(unsigned short)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestEnum:(unsigned char)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestFloat:(float)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestInt16:(short)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestInt32:(int)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestInt64:(long long)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestInt8:(BOOL)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestRawData:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestString:(id)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestUInt16:(unsigned short)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestUInt32:(unsigned int)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestUInt64:(unsigned long long)arg2;
- (void)typeTestService:(id)arg1 didUpdateTestUInt8:(unsigned char)arg2;

@end