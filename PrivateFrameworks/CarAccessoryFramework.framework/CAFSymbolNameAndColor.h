/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFSymbolNameAndColor : NSObject <NSFastEnumeration> {
    NSError * _parseError;
    NSArray * _symbolImageWithColors;
}

@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) NSError *parseError;
@property (nonatomic, readonly) NSArray *symbolImageWithColors;

+ (id)symbolNameAndColorWithArray:(id)arg1;
+ (id)symbolNameAndColorWithSymbolImageWithColors:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)formattedValue;
- (id)initWithArray:(id)arg1;
- (id)initWithSymbolImageWithColors:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)parseError;
- (id)symbolImageWithColors;

@end
