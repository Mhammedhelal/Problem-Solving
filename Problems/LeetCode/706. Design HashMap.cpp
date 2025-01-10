struct Node
{
    int key, val;
    Node *next;
    Node(int k, int v, Node *next) : key(k), val(v), next(next) {}
};
class MyHashMap
{
    Node *map[10001] = {};
    int hashFunc(int key)
    {
        return key % 100;
    }

public:
    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        remove(key);
        int h = hashFunc(key);
        Node *node = new Node(key, value, map[h]);
        map[h] = node;
    }

    int get(int key)
    {
        int h = hashFunc(key);
        Node *node = map[h];
        while (node)
        {
            if (node->key == key)
                return node->val;
            node = node->next;
        }

        return -1;
    }

    void remove(int key)
    {
        int h = hashFunc(key);
        Node *node = map[h];
        if (!node)
            return;
        if (node->key == key)
        {
            map[h] = node->next;
            delete node;
        }
        else
        {
            while (node->next)
            {
                if (node->next->key == key)
                {
                    Node *del = node->next;
                    node->next = del->next;
                    delete del;
                    return;
                }
                node = node->next;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */