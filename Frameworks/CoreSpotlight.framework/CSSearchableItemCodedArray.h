/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItemCodedArray : NSArray {
    NSString * _bundleID;
    CSDecoder * _items;
    CSDecoder * _itemsContent;
    struct { 
        char *containerBytes; 
        unsigned long long containerLength; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _obj;
    NSString * _protectionClass;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) CSDecoder *items;
@property (nonatomic, readonly) CSDecoder *itemsContent;
@property (nonatomic, readonly) struct { char *x1; unsigned long long x2; struct { unsigned int x_3_1_1; unsigned char x_3_1_2; } x3; } obj;
@property (nonatomic, retain) NSString *protectionClass;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)count;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 itemsContent:(id)arg2;
- (id)items;
- (id)itemsContent;
- (struct { char *x1; unsigned long long x2; struct { unsigned int x_3_1_1; unsigned char x_3_1_2; } x3; })obj;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)protectionClass;
- (void)setBundleID:(id)arg1;
- (void)setProtectionClass:(id)arg1;

@end
