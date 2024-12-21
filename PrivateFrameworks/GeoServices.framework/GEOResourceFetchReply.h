/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceFetchReply : GEOXPCReply <GEOXPCReply> {
    NSArray * _names;
    NSArray * _paths;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *names;
@property (nonatomic, retain) NSArray *paths;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)names;
- (id)paths;
- (void)setNames:(id)arg1;
- (void)setPaths:(id)arg1;

@end