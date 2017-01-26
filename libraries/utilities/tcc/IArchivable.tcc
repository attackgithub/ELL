////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     IArchivable.tcc (utilities)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ell
{
namespace utilities
{
    template <typename ValueType>
    static ValueType CreateObject(const ObjectArchive& archive)
    {
        return archive.GetValue<ValueType>();
    }
}
}