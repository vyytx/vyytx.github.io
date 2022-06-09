<div class="holder">
    <p>vyytx / {roles[roleId]}</p>
</div>

<script>
    let roles = ['Coding', 'Designing', 'Arranging']
    let roleId = 0;
    setInterval(() => {
        roleId++;
        if(roleId >= roles.length) roleId = 0;
    }, 1000)
</script>

<style lang="scss">
    .holder {
        width: 80vw;
        height: 100vh;
    }

</style>