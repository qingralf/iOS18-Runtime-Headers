/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface CFXIONSZipFileArchive : NSObject {
    NSMutableDictionary * _cachedContents;
    NSDictionary * _contents;
    NSData * _data;
    long long  _desc;
    NSArray * _names;
    NSString * _path;
    NSDictionary * _properties;
    id  _provider;
    void * _reserved;
    void * _reserved2;
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    }  _zFlags;
}

- (id)archiveData;
- (id)archiveStream;
- (id)contentsForEntryName:(id)arg1;
- (void)dealloc;
- (id)entryNames;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)propertiesForEntryName:(id)arg1;
- (id)streamForEntryName:(id)arg1;
- (bool)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
